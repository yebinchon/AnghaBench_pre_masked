
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stat {size_t st_size; } ;
struct carlfw {int dummy; } ;
struct carl9170fw_otus_desc {int miniboot_size; int feature_set; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct carl9170fw_otus_desc* FUNC_3 (struct carlfw*,int *,int,int ) ;
 char* FUNC_4 (struct carlfw*,size_t) ;
 int FUNC_5 (struct carlfw*) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char const*,char*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (char*,size_t,int,int *) ;
 int FUNC_13 (int ,struct stat*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_14(struct carlfw *VAR_5, const char *VAR_6)
{
 struct stat VAR_7;
 struct carl9170fw_otus_desc *VAR_8 = ((void*)0);
 FILE *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 size_t VAR_11;
 int VAR_12;

 VAR_9 = FUNC_10(VAR_6, "r");
 if (VAR_9 == ((void*)0)) {
  FUNC_11(VAR_4, "Failed to open file %s (%d).\n",
   VAR_6, VAR_3);
  VAR_12 = -VAR_3;
  goto fail;
 }

 VAR_12 = FUNC_13(FUNC_9(VAR_9), &VAR_7);
 if (VAR_12) {
  FUNC_11(VAR_4, "Failed to query file infos from "
    "\"%s\" (%d).\n", VAR_6, VAR_3);
  VAR_12 = -VAR_3;
  goto fail;
 }
 VAR_11 = VAR_7.st_size;

 VAR_8 = FUNC_3(VAR_5, (uint8_t *) VAR_2,
         sizeof(*VAR_8),
         VAR_1);
 if (!VAR_8) {
  FUNC_11(VAR_4, "No OTUS descriptor found\n");
  goto fail;
 }

 if (FUNC_2(VAR_8->feature_set, VAR_0)) {
  FUNC_11(VAR_4, "Firmware has already a miniboot image.\n");
  goto fail;
 }

 VAR_8->feature_set |= FUNC_7(FUNC_0(VAR_0));
 VAR_8->miniboot_size = FUNC_6(VAR_11);

 VAR_10 = FUNC_4(VAR_5, VAR_11);
 if (FUNC_1(VAR_10)) {
  FUNC_11(VAR_4, "Unable to add miniboot image.\n");
  goto fail;
 }

 VAR_12 = FUNC_12(VAR_10, VAR_11, 1, VAR_9);
 if (VAR_12 != 1) {
  FUNC_11(VAR_4, "Unable to load miniboot.\n");
  goto fail;
 }

 FUNC_5(VAR_5);
 FUNC_8(VAR_9);

 return 0;

fail:
 if (VAR_9)
  FUNC_8(VAR_9);

 return VAR_12;
}
