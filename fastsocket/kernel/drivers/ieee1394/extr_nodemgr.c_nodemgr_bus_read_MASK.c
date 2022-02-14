
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nodemgr_csr_info {scalar_t__ speed_unverified; int generation; int nodeid; int host; } ;
struct csr1212_csr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,void*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nodemgr_csr_info*,int ,void*) ;

__attribute__((used)) static int FUNC_3(struct csr1212_csr *VAR_1, u64 VAR_2,
       void *VAR_3, void *VAR_4)
{
 struct nodemgr_csr_info *VAR_5 = (struct nodemgr_csr_info*)VAR_4;
 int VAR_6, VAR_7;

 for (VAR_6 = 1; ; VAR_6++) {
  VAR_7 = FUNC_0(VAR_5->host, VAR_5->nodeid, VAR_5->generation, VAR_2,
      VAR_3, 4);
  if (!VAR_7) {
   VAR_5->speed_unverified = 0;
   break;
  }

  if (VAR_6 == 3)
   break;



  if (VAR_5->speed_unverified) {
   VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_3);
   if (!VAR_7)
    break;
  }
  if (FUNC_1(334))
   return -VAR_0;
 }
 return VAR_7;
}
