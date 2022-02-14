
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poseidon {int udev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct poseidon*,int ,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct poseidon*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct poseidon *VAR_6)
{
 s32 VAR_7 = 0, VAR_8 = 0;

 FUNC_2(VAR_3);
 FUNC_0(VAR_1/4);

 VAR_7 = FUNC_4(VAR_6->udev, 0, VAR_0);
 if (VAR_7 != 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_5, &VAR_8);
 if (VAR_7|VAR_8)
  return VAR_7;

 return 0;
}
