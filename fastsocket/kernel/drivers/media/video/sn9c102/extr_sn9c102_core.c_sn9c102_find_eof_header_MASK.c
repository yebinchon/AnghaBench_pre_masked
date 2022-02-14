
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_3__ u8 ;
struct TYPE_6__ {scalar_t__ pixelformat; } ;
struct TYPE_7__ {TYPE_1__ pix_format; } ;
struct sn9c102_device {TYPE_2__ sensor; } ;


 size_t FUNC_0 (TYPE_3__ const**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*,TYPE_3__ const*,int) ;

__attribute__((used)) static void*
FUNC_2(struct sn9c102_device* VAR_2, void* VAR_3, size_t VAR_4)
{
 static const u8 VAR_5[4][4] = {
  {0x00, 0x00, 0x00, 0x00},
  {0x40, 0x00, 0x00, 0x00},
  {0x80, 0x00, 0x00, 0x00},
  {0xc0, 0x00, 0x00, 0x00},
 };
 size_t VAR_6, VAR_7;


 if (VAR_2->sensor.pix_format.pixelformat == VAR_1 ||
     VAR_2->sensor.pix_format.pixelformat == VAR_0)
  return ((void*)0);






 for (VAR_6 = 0; (VAR_4 >= 4) && (VAR_6 <= VAR_4 - 4); VAR_6++)
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
   if (!FUNC_1(VAR_3 + VAR_6, VAR_5[VAR_7], 4))
    return VAR_3 + VAR_6;

 return ((void*)0);
}
