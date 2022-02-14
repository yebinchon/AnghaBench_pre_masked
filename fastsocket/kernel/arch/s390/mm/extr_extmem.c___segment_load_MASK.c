
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct dcss_segment {unsigned long start_addr; unsigned long end; int flags; unsigned long start; char* res_name; char* name; int vm_segtype; int do_nonshared; struct dcss_segment* res; int list; int ref_count; int dcss_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*,int ,unsigned long*,unsigned long*) ;
 int FUNC_3 (unsigned long) ;
 int VAR_11 ;
 int FUNC_4 (char*,int ) ;
 int VAR_12 ;
 int FUNC_5 (struct dcss_segment*) ;
 struct dcss_segment* FUNC_6 (int,int ) ;
 struct dcss_segment* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (char**,int ,int) ;
 int FUNC_10 (char*,char*,void*,void*,int ) ;
 int FUNC_11 (char*,char*,unsigned long) ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (struct dcss_segment*) ;
 int FUNC_13 (struct dcss_segment*) ;
 scalar_t__ FUNC_14 (int *,struct dcss_segment*) ;
 scalar_t__ FUNC_15 (struct dcss_segment*) ;
 int * VAR_16 ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (unsigned long,unsigned long) ;
 int FUNC_18 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_19 (char *VAR_17, int VAR_18, unsigned long *VAR_19, unsigned long *VAR_20)
{
 struct dcss_segment *VAR_21 = FUNC_6(sizeof(struct dcss_segment),
   VAR_3);
 int VAR_22, VAR_23;
 unsigned long VAR_24, VAR_25, VAR_26;

 if (VAR_21 == ((void*)0)) {
  VAR_22 = -VAR_2;
  goto out;
 }
 FUNC_4 (VAR_17, VAR_21->dcss_name);
 VAR_22 = FUNC_12 (VAR_21);
 if (VAR_22 < 0)
  goto out_free;

 if (VAR_14 == VAR_0) {
  if (FUNC_15(VAR_21)) {
   VAR_22 = -VAR_1;
   goto out_free;
  }
 }

 VAR_22 = FUNC_17(VAR_21->start_addr, VAR_21->end - VAR_21->start_addr + 1);

 if (VAR_22)
  goto out_free;

 VAR_21->res = FUNC_7(sizeof(struct resource), VAR_4);
 if (VAR_21->res == ((void*)0)) {
  VAR_22 = -VAR_2;
  goto out_shared;
 }
 VAR_21->res->flags = VAR_5 | VAR_6;
 VAR_21->res->start = VAR_21->start_addr;
 VAR_21->res->end = VAR_21->end;
 FUNC_9(&VAR_21->res_name, VAR_21->dcss_name, 8);
 FUNC_0(VAR_21->res_name, 8);
 VAR_21->res_name[8] = '\0';
 FUNC_16(VAR_21->res_name, " (DCSS)", 7);
 VAR_21->res->name = VAR_21->res_name;
 VAR_22 = VAR_21->vm_segtype;
 if (VAR_22 == VAR_9 ||
     ((VAR_22 == VAR_10 || VAR_22 == VAR_8) && !VAR_18))
  VAR_21->res->flags |= VAR_7;
 if (FUNC_14(&VAR_12, VAR_21->res)) {
  VAR_22 = -VAR_1;
  FUNC_5(VAR_21->res);
  goto out_shared;
 }

 if (VAR_18)
  VAR_23 = FUNC_2(&VAR_13, VAR_21->dcss_name,
    &VAR_24, &VAR_25);
 else
  VAR_23 = FUNC_2(&VAR_14, VAR_21->dcss_name,
    &VAR_24, &VAR_25);
 if (VAR_23 < 0) {
  FUNC_2(&VAR_15, VAR_21->dcss_name,
    &VAR_26, &VAR_26);
  VAR_22 = VAR_23;
  goto out_resource;
 }
 if (VAR_23 > 1) {
  FUNC_11("Loading DCSS %s failed with rc=%ld\n", VAR_17,
      VAR_25);
  VAR_22 = FUNC_3(VAR_25);
  FUNC_2(&VAR_15, VAR_21->dcss_name,
    &VAR_26, &VAR_26);
  goto out_resource;
 }
 VAR_21->start_addr = VAR_24;
 VAR_21->end = VAR_25;
 VAR_21->do_nonshared = VAR_18;
 FUNC_1(&VAR_21->ref_count, 1);
 FUNC_8(&VAR_21->list, &VAR_11);
 *VAR_19 = VAR_21->start_addr;
 *VAR_20 = VAR_21->end;
 if (VAR_18)
  FUNC_10("DCSS %s of range %p to %p and type %s loaded as "
   "exclusive-writable\n", VAR_17, (void*) VAR_21->start_addr,
   (void*) VAR_21->end, VAR_16[VAR_21->vm_segtype]);
 else {
  FUNC_10("DCSS %s of range %p to %p and type %s loaded in "
   "shared access mode\n", VAR_17, (void*) VAR_21->start_addr,
   (void*) VAR_21->end, VAR_16[VAR_21->vm_segtype]);
 }
 goto out;
 out_resource:
 FUNC_13(VAR_21->res);
 FUNC_5(VAR_21->res);
 out_shared:
 FUNC_18(VAR_21->start_addr, VAR_21->end - VAR_21->start_addr + 1);
 out_free:
 FUNC_5(VAR_21);
 out:
 return VAR_22;
}
