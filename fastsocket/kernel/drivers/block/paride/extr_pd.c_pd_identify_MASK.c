
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {scalar_t__ drive; int can_lba; int sectors; int heads; int cylinders; int capacity; int removable; int standby; int name; int pi; } ;
typedef enum action { ____Placeholder_action } action ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pd_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pd_unit*) ;
 int FUNC_5 (struct pd_unit*) ;
 int* VAR_7 ;
 int FUNC_6 (struct pd_unit*,int,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct pd_unit*) ;
 int FUNC_8 (struct pd_unit*,int ,int ) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (char*,int ,char*,char*,int,int,int,int,int,char*) ;
 int FUNC_11 (struct pd_unit*,int,int ) ;

__attribute__((used)) static enum action FUNC_12(struct pd_unit *VAR_8)
{
 int VAR_9;
 char VAR_10[VAR_3 + 1];







 if (VAR_8->drive == 0)
  FUNC_5(VAR_8);

 FUNC_11(VAR_8, 6, FUNC_1(VAR_8));
 FUNC_8(VAR_8, 0, FUNC_0("before IDENT"));
 FUNC_6(VAR_8, 1, 0, 0, 0, 0, VAR_1);

 if (FUNC_8(VAR_8, VAR_5, FUNC_0("IDENT DRQ")) & VAR_6)
  return VAR_0;
 FUNC_9(VAR_8->pi, VAR_7, 512);
 VAR_8->can_lba = VAR_7[99] & 2;
 VAR_8->sectors = FUNC_2(*(__le16 *) (VAR_7 + 12));
 VAR_8->heads = FUNC_2(*(__le16 *) (VAR_7 + 6));
 VAR_8->cylinders = FUNC_2(*(__le16 *) (VAR_7 + 2));
 if (VAR_8->can_lba)
  VAR_8->capacity = FUNC_3(*(__le32 *) (VAR_7 + 120));
 else
  VAR_8->capacity = VAR_8->sectors * VAR_8->heads * VAR_8->cylinders;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_10[VAR_9 ^ 1] = VAR_7[VAR_9 + VAR_4];
 VAR_9 = VAR_3 - 1;
 while ((VAR_9 >= 0) && (VAR_10[VAR_9] <= 0x20))
  VAR_9--;
 VAR_9++;
 VAR_10[VAR_9] = 0;

 VAR_8->removable = VAR_7[0] & 0x80;

 FUNC_10("%s: %s, %s, %d blocks [%dM], (%d/%d/%d), %s media\n",
        VAR_8->name, VAR_10,
        VAR_8->drive ? "slave" : "master",
        VAR_8->capacity, VAR_8->capacity / 2048,
        VAR_8->cylinders, VAR_8->heads, VAR_8->sectors,
        VAR_8->removable ? "removable" : "fixed");

 if (VAR_8->capacity)
  FUNC_4(VAR_8);
 if (!VAR_8->standby)
  FUNC_7(VAR_8);

 return VAR_2;
}
