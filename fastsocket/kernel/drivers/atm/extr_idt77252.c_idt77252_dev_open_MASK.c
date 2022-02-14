
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt77252_dev {int name; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct idt77252_dev*) ;
 scalar_t__ FUNC_2 (struct idt77252_dev*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int
FUNC_7(struct idt77252_dev *VAR_14)
{
 u32 VAR_15;

 if (!FUNC_5(VAR_0, &VAR_14->flags)) {
  FUNC_3("%s: SAR not yet initialized.\n", VAR_14->name);
  return -1;
 }

 VAR_15 = VAR_5|
     VAR_13 |
     VAR_3 |
     VAR_4 |
     VAR_6 |
     VAR_1 |
     VAR_7 |
     VAR_8 |
     VAR_10 |
     VAR_9 |
     VAR_2
     ;






 FUNC_6(FUNC_4(VAR_12) | VAR_15, VAR_12);

 if (FUNC_1(VAR_14)) {
  FUNC_3("%s: Error initializing OAM.\n", VAR_14->name);
  return -1;
 }

 if (FUNC_2(VAR_14)) {
  FUNC_3("%s: Error initializing UBR0.\n", VAR_14->name);
  return -1;
 }

 FUNC_0("%s: opened IDT77252 ABR SAR.\n", VAR_14->name);
 return 0;
}
