
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {struct tape_3590_rdc_data* discdata; } ;
struct TYPE_2__ {int capability; } ;
struct tape_3590_rdc_data {int* data; TYPE_1__ crypt_info; int read_back_op; } ;
struct tape_3590_disc_data {int* data; TYPE_1__ crypt_info; int read_back_op; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct tape_3590_rdc_data*) ;
 struct tape_3590_rdc_data* FUNC_3 (int,int) ;
 struct tape_3590_rdc_data* FUNC_4 (int,int) ;
 int FUNC_5 (struct tape_device*,struct tape_3590_rdc_data*) ;
 int FUNC_6 (struct tape_device*) ;
 int FUNC_7 (struct tape_device*) ;
 int FUNC_8 (struct tape_device*) ;

__attribute__((used)) static int
FUNC_9(struct tape_device *VAR_5)
{
 int VAR_6;
 struct tape_3590_disc_data *VAR_7;
 struct tape_3590_rdc_data *VAR_8;

 FUNC_0(6, "3590 device setup\n");
 VAR_7 = FUNC_4(sizeof(struct tape_3590_disc_data), VAR_2 | VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_7->read_back_op = VAR_3;
 VAR_5->discdata = VAR_7;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2 | VAR_1);
 if (!VAR_8) {
  VAR_6 = -VAR_0;
  goto fail_kmalloc;
 }
 VAR_6 = FUNC_5(VAR_5, VAR_8);
 if (VAR_6) {
  FUNC_1(3, "Read device characteristics failed!\n");
  goto fail_rdc_data;
 }
 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6)
  goto fail_rdc_data;
 if (VAR_8->data[31] == 0x13) {
  VAR_7->crypt_info.capability |= VAR_4;
  FUNC_7(VAR_5);
 } else {
  FUNC_0(6, "Device has NO crypto support\n");
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_1(3, "3590 medium sense returned %d\n", VAR_6);
  goto fail_rdc_data;
 }
 return 0;

fail_rdc_data:
 FUNC_2(VAR_8);
fail_kmalloc:
 FUNC_2(VAR_7);
 return VAR_6;
}
