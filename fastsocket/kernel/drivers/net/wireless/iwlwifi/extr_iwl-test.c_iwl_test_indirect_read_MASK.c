
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {int dummy; } ;
struct TYPE_2__ {int size; int in_read; int nchunks; int * addr; } ;
struct iwl_test {TYPE_1__ mem; struct iwl_trans* trans; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct iwl_trans*,int ) ;
 int FUNC_2 (struct iwl_trans*,int,unsigned long*) ;
 int FUNC_3 (struct iwl_trans*,int,int *,int) ;
 int FUNC_4 (struct iwl_trans*,unsigned long*) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int * FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct iwl_test *VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct iwl_trans *VAR_12 = VAR_9->trans;
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_11 & 0x3)
  return -VAR_1;

 VAR_9->mem.size = VAR_11;
 VAR_9->mem.addr = FUNC_6(VAR_9->mem.size, VAR_4);
 if (VAR_9->mem.addr == ((void*)0))
  return -VAR_3;


 if (VAR_7 <= VAR_10 &&
     VAR_10 < VAR_7 + VAR_8) {
   if (!FUNC_2(VAR_12, 0, &VAR_13)) {
    return -VAR_2;
   }
   FUNC_5(VAR_12, VAR_5,
        VAR_10 | (3 << 24));
   for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14 += 4)
    *(u32 *)(VAR_9->mem.addr + VAR_14) =
     FUNC_1(VAR_12, VAR_6);
   FUNC_4(VAR_12, &VAR_13);
 } else {
  FUNC_3(VAR_12, VAR_10, VAR_9->mem.addr,
       VAR_9->mem.size / 4);
 }

 VAR_9->mem.nchunks =
  FUNC_0(VAR_9->mem.size, VAR_0);
 VAR_9->mem.in_read = 1;
 return 0;

}
