
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct carlfw {int dummy; } ;
struct carl9170fw_fix_desc {int dummy; } ;
struct TYPE_3__ {char option; int argc; int (* func ) (struct carlfw*,struct carl9170fw_fix_desc*,char,int,char**) ;} ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct carlfw*) ;
 int FUNC_2 (struct carlfw*) ;
 struct carl9170fw_fix_desc* FUNC_3 (struct carlfw*,int *,int,int ) ;
 struct carlfw* FUNC_4 (char*) ;
 int FUNC_5 (struct carlfw*) ;
 int FUNC_6 (struct carlfw*) ;
 int FUNC_7 (int ,char*,...) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (struct carlfw*,struct carl9170fw_fix_desc*,char,int,char**) ;
 int FUNC_10 () ;

int FUNC_11(int VAR_7, char *VAR_8[])
{
 struct carl9170fw_fix_desc *VAR_9;
 struct carlfw *VAR_10 = ((void*)0);
 unsigned int VAR_11;
 int VAR_12 = 0;
 char VAR_13;

 if (VAR_7 < 3 || VAR_7 > 6) {
  VAR_12 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_8[1]);
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  FUNC_7(VAR_6, "Failed to open file \"%s\" (%d).\n",
   VAR_8[1], VAR_12);
  goto out;
 }

 VAR_9 = FUNC_3(VAR_10, (uint8_t *)VAR_4, sizeof(*VAR_9),
          VAR_0);

 VAR_13 = VAR_8[2][0];
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  if (VAR_5[VAR_11].option != VAR_13)
   continue;

  if (VAR_7 != VAR_5[VAR_11].argc) {
   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_12 = VAR_5[VAR_11].func(VAR_10, VAR_9, VAR_13, VAR_7, VAR_8);
  if (VAR_12)
   goto out;

  break;
 }
 if (VAR_11 == FUNC_0(VAR_5)) {
  FUNC_7(VAR_6, "Unknown option: '%c'\n",
   VAR_8[2][0]);
  goto out;
 }

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12) {
  FUNC_7(VAR_6, "Failed to apply changes (%d).\n", VAR_12);
  goto out;
 }

out:
 FUNC_5(VAR_10);

 if (VAR_12) {
  if (VAR_12 == -VAR_1)
   FUNC_10();
  else
   FUNC_7(VAR_6, "%s\n", FUNC_8(VAR_12));
 }

 return VAR_12 ? VAR_2 : VAR_3;
}
