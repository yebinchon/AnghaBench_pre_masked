
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt77252_dev {int name; } ;
struct atm_dev {struct idt77252_dev* dev_data; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
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
 int FUNC_1 (struct idt77252_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct atm_dev *VAR_11)
{
 struct idt77252_dev *VAR_12 = VAR_11->dev_data;
 u32 VAR_13;

 FUNC_1(VAR_12);

 VAR_13 = VAR_3 |
     VAR_10 |
     VAR_1 |
     VAR_2 |
     VAR_4 |
     VAR_0 |
     VAR_5 |
     VAR_6 |
     VAR_8 |
     VAR_7
     ;

 FUNC_3(FUNC_2(VAR_9) & ~(VAR_13), VAR_9);

 FUNC_0("%s: closed IDT77252 ABR SAR.\n", VAR_12->name);
}
