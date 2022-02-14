
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {int nvs_len; int nvs; TYPE_1__* hw; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,int ,struct device*) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct wl1251 *VAR_4)
{
 const struct firmware *VAR_5;
 struct device *VAR_6 = FUNC_3(VAR_4->hw->wiphy);
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_5, VAR_3, VAR_6);

 if (VAR_7 < 0) {
  FUNC_4("could not get nvs file: %d", VAR_7);
  return VAR_7;
 }

 if (VAR_5->size % 4) {
  FUNC_4("nvs size is not multiple of 32 bits: %zu",
        VAR_5->size);
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_4->nvs_len = VAR_5->size;
 VAR_4->nvs = FUNC_0(VAR_5->data, VAR_4->nvs_len, VAR_2);

 if (!VAR_4->nvs) {
  FUNC_4("could not allocate memory for the nvs file");
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = 0;

out:
 FUNC_1(VAR_5);

 return VAR_7;
}
