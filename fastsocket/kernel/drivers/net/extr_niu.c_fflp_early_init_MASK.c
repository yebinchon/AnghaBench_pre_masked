
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {int flags; scalar_t__ plat_type; } ;
struct niu {struct niu_parent* parent; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*,int ) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*,int) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*,unsigned long) ;
 int FUNC_7 (struct niu*,unsigned long) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 (struct niu*) ;
 int FUNC_12 (struct niu*) ;

__attribute__((used)) static int FUNC_13(struct niu *VAR_5)
{
 struct niu_parent *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_6(VAR_5, VAR_7);

 VAR_6 = VAR_5->parent;
 VAR_8 = 0;
 if (!(VAR_6->flags & VAR_2)) {
  FUNC_8(VAR_4, "fflp_early_init: Initting hw on port %u\n",
         VAR_5->port);
  if (VAR_5->parent->plat_type != VAR_3) {
   FUNC_4(VAR_5);
   FUNC_5(VAR_5);
   VAR_8 = FUNC_0(VAR_5);
   if (VAR_8) {
    FUNC_8(VAR_4, "fflp_disable_all_partitions "
           "failed, err=%d\n", VAR_8);
    goto out;
   }
  }

  VAR_8 = FUNC_10(VAR_5);
  if (VAR_8) {
   FUNC_8(VAR_4, "tcam_early_init failed, err=%d\n",
          VAR_8);
   goto out;
  }
  FUNC_3(VAR_5, 1);
  FUNC_1(VAR_5, 0);
  FUNC_9(VAR_0, 0);
  FUNC_9(VAR_1, 0);

  VAR_8 = FUNC_11(VAR_5);
  if (VAR_8) {
   FUNC_8(VAR_4, "tcam_flush_all failed, err=%d\n",
          VAR_8);
   goto out;
  }
  if (VAR_5->parent->plat_type != VAR_3) {
   VAR_8 = FUNC_2(VAR_5);
   if (VAR_8) {
    FUNC_8(VAR_4, "fflp_hash_clear failed, "
           "err=%d\n", VAR_8);
    goto out;
   }
  }

  FUNC_12(VAR_5);

  FUNC_8(VAR_4, "fflp_early_init: Success\n");
  VAR_6->flags |= VAR_2;
 }
out:
 FUNC_7(VAR_5, VAR_7);
 return VAR_8;
}
