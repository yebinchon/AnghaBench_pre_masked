
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlfw_file {unsigned long len; int * data; scalar_t__ name; } ;
struct carlfw {struct carlfw_file fw; struct carlfw_file hdr; int desc_list; } ;
struct carl9170fw_otus_desc {int dummy; } ;
struct carl9170fw_last_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct carlfw* FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (struct carlfw_file*,int *,int,int ) ;
 int FUNC_2 (struct carlfw_file*,char const*,char*) ;
 struct carlfw* FUNC_3 (int,int) ;
 int FUNC_4 (struct carlfw*) ;
 int FUNC_5 (struct carlfw*,struct carl9170fw_otus_desc*) ;
 int FUNC_6 (struct carlfw*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,unsigned long) ;
 int * FUNC_9 (int *,unsigned long) ;

struct carlfw *FUNC_10(const char *VAR_6)
{
 char VAR_7[256];
 struct carlfw *VAR_8;
 struct carl9170fw_otus_desc *VAR_9;
 struct carl9170fw_last_desc *VAR_10;
 struct carlfw_file *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_8 = FUNC_3(1, sizeof(*VAR_8));
 if (!VAR_8)
  return FUNC_0(-VAR_3);

 FUNC_7(&VAR_8->desc_list);

 VAR_16 = FUNC_2(&VAR_8->fw, VAR_6, "r");
 if (VAR_16)
  goto err_out;

 if (VAR_8->hdr.name)
  VAR_11 = &VAR_8->hdr;
 else
  VAR_11 = &VAR_8->fw;

 VAR_9 = FUNC_1(VAR_11, (uint8_t *) VAR_5,
           sizeof(*VAR_9),
           VAR_1);
 VAR_10 = FUNC_1(VAR_11, (uint8_t *) VAR_4,
           sizeof(*VAR_10),
           VAR_0);

 if (!VAR_9 || !VAR_10 ||
     (unsigned long) VAR_9 > (unsigned long) VAR_10) {
  VAR_16 = -VAR_2;
  goto err_out;
 }

 VAR_16 = FUNC_5(VAR_8, VAR_9);
 if (VAR_16)
  goto err_out;

 VAR_12 = (unsigned long)VAR_10 + sizeof(*VAR_10);
 VAR_13 = VAR_12 - (unsigned long)VAR_9;
 VAR_15 = VAR_11->len - (VAR_12 - (unsigned long) VAR_11->data);

 if (VAR_15) {
  VAR_14 = (unsigned long)VAR_9 - (unsigned long)VAR_11->data;
  FUNC_8(&VAR_11->data[VAR_14],
   ((uint8_t *)VAR_10) + sizeof(*VAR_10), VAR_15);
 }

 VAR_11->len -= VAR_13;
 VAR_11->data = FUNC_9(VAR_11->data, VAR_11->len);
 if (!VAR_11->data && VAR_11->len) {
  VAR_16 = -VAR_3;
  goto err_out;
 }

 VAR_16 = FUNC_4(VAR_8);
 if (VAR_16 && VAR_16 != -VAR_2)
  goto err_out;

 return VAR_8;

err_out:
 FUNC_6(VAR_8);
 return FUNC_0(VAR_16);
}
