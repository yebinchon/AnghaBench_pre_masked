
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sd {int gspca_dev; int * sensor_priv; } ;
typedef int s32 ;
struct TYPE_4__ {int* data; int len; scalar_t__ start; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct sd*,scalar_t__,int) ;
 int FUNC_2 (struct sd*,int *,int) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct sd *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 s32 *VAR_7 = VAR_4->sensor_priv;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {

  if (VAR_2[VAR_6].data == ((void*)0)) {
   VAR_5 = FUNC_1(VAR_4,
    VAR_2[VAR_6].start,
    VAR_2[VAR_6].len);
  } else {
   int VAR_8;
   for (VAR_8 = 0; VAR_8 < VAR_2[VAR_6].len; VAR_8++)
    VAR_5 = FUNC_1(VAR_4,
     VAR_2[VAR_6].start + VAR_8,
     VAR_2[VAR_6].data[VAR_8]);
  }
 }

 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4, (u8 *) VAR_3,
      FUNC_0(VAR_3));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(&VAR_4->gspca_dev,
       VAR_7[VAR_0]);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(&VAR_4->gspca_dev,
          VAR_7[VAR_1]);

 return (VAR_5 < 0) ? VAR_5 : 0;
}
