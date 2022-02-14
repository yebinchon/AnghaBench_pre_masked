
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; int ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int,int *,int) ;
 int FUNC_5 (struct qlcnic_adapter*,void*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_6)
{
 u8 *VAR_7;
 u32 VAR_8, VAR_9;
 u64 VAR_10;
 int VAR_11 = -VAR_0;

 VAR_8 = VAR_5;
 VAR_10 = FUNC_0(VAR_6->ahw, VAR_3);
 VAR_9 = FUNC_0(VAR_6->ahw, VAR_4);


 if (VAR_9 & 0xF)
  VAR_9 = (VAR_9 + 16) & ~0xF;

 VAR_7 = FUNC_3(VAR_9, VAR_2);

 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_6->pdev->dev,
   "Failed to allocate memory for boot loader cache\n");
  return -VAR_1;
 }
 VAR_11 = FUNC_4(VAR_6, VAR_8, VAR_7,
      VAR_9 / sizeof(u32));
 if (VAR_11) {
  FUNC_2(VAR_7);
  return VAR_11;
 }

 VAR_11 = FUNC_5(VAR_6, VAR_10, (u32 *)VAR_7,
       VAR_9 / 16);
 if (VAR_11) {
  FUNC_2(VAR_7);
  return VAR_11;
 }
 FUNC_2(VAR_7);

 return VAR_11;
}
