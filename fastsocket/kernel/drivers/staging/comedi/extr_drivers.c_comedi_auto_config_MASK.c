
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct comedi_device_file_info {TYPE_1__* device; } ;
struct comedi_devconfig {char* board_name; int options; } ;
typedef int it ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct comedi_devconfig*) ;
 int FUNC_3 (int) ;
 struct comedi_device_file_info* FUNC_4 (int) ;
 int FUNC_5 (struct device*,unsigned int*) ;
 int FUNC_6 (unsigned int*) ;
 unsigned int* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int const*,unsigned int) ;
 int FUNC_9 (struct comedi_devconfig*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char const*,int) ;

int FUNC_13(struct device *VAR_5, const char *VAR_6,
         const int *VAR_7, unsigned VAR_8)
{
 struct comedi_devconfig VAR_9;
 int VAR_10;
 struct comedi_device_file_info *VAR_11;
 int VAR_12;
 unsigned *VAR_13 = ((void*)0);

 if (!VAR_4) {
  FUNC_5(VAR_5, ((void*)0));
  return 0;
 }

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_13 = FUNC_7(sizeof(unsigned), VAR_3);
 if (VAR_13 == ((void*)0)) {
  VAR_12 = -VAR_2;
  goto cleanup;
 }
 *VAR_13 = VAR_10;
 FUNC_5(VAR_5, VAR_13);

 VAR_11 = FUNC_4(VAR_10);

 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 FUNC_12(VAR_9.board_name, VAR_6, VAR_0);
 VAR_9.board_name[VAR_0 - 1] = '\0';
 FUNC_0(VAR_8 > VAR_1);
 FUNC_8(VAR_9.options, VAR_7, VAR_8 * sizeof(int));

 FUNC_10(&VAR_11->device->mutex);
 VAR_12 = FUNC_2(VAR_11->device, &VAR_9);
 FUNC_11(&VAR_11->device->mutex);

cleanup:
 if (VAR_12 < 0) {
  FUNC_6(VAR_13);
  FUNC_3(VAR_10);
 }
 return VAR_12;
}
