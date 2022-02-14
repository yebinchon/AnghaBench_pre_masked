
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct iwl_trans {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct iwl_trans*,int ,int ,int ,int ) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_trans *VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  FUNC_2(VAR_4, VAR_0,
       VAR_1);


  VAR_6 = FUNC_1(VAR_4, VAR_0,
    VAR_1,
    VAR_1,
    VAR_3);
  if (VAR_6 >= 0) {
   FUNC_0(VAR_4->dev,
      "Acquired semaphore after %d tries.\n",
      VAR_5+1);
   return VAR_6;
  }
 }

 return VAR_6;
}
