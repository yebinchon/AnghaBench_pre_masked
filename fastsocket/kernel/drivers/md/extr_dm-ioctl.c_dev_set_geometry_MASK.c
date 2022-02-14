
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hd_geometry {unsigned long cylinders; unsigned long heads; unsigned long sectors; unsigned long start; } ;
struct dm_ioctl {int data_start; char* data; scalar_t__ data_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*,struct hd_geometry*) ;
 struct mapped_device* FUNC_3 (struct dm_ioctl*) ;
 scalar_t__ FUNC_4 (char*,void*) ;
 int FUNC_5 (char*,char*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,char*) ;

__attribute__((used)) static int FUNC_6(struct dm_ioctl *VAR_3, size_t VAR_4)
{
 int VAR_5 = -VAR_0, VAR_6;
 struct mapped_device *VAR_7;
 struct hd_geometry VAR_8;
 unsigned long VAR_9[4];
 char *VAR_10 = (char *) VAR_3 + VAR_3->data_start;
 char VAR_11;

 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  return -VAR_1;

 if (VAR_10 < VAR_3->data ||
     FUNC_4(VAR_10, (void *) VAR_3 + VAR_4)) {
  FUNC_0("Invalid geometry supplied.");
  goto out;
 }

 VAR_6 = FUNC_5(VAR_10, "%lu %lu %lu %lu%c", VAR_9,
     VAR_9 + 1, VAR_9 + 2, VAR_9 + 3, &VAR_11);

 if (VAR_6 != 4) {
  FUNC_0("Unable to interpret geometry settings.");
  goto out;
 }

 if (VAR_9[0] > 65535 || VAR_9[1] > 255 ||
     VAR_9[2] > 255 || VAR_9[3] > VAR_2) {
  FUNC_0("Geometry exceeds range limits.");
  goto out;
 }

 VAR_8.cylinders = VAR_9[0];
 VAR_8.heads = VAR_9[1];
 VAR_8.sectors = VAR_9[2];
 VAR_8.start = VAR_9[3];

 VAR_5 = FUNC_2(VAR_7, &VAR_8);

 VAR_3->data_size = 0;

out:
 FUNC_1(VAR_7);
 return VAR_5;
}
