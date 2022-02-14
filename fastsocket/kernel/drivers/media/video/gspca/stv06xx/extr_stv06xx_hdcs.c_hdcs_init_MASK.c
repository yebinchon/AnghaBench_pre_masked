
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ bridge; int gspca_dev; struct hdcs* sensor_priv; } ;
struct TYPE_2__ {int height; int width; } ;
struct hdcs {int psmp; TYPE_1__ array; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sd*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct sd*) ;
 int VAR_5 ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct sd*,int ) ;
 int FUNC_7 (struct sd*,int ,int ) ;
 int FUNC_8 (struct sd*,int,int) ;
 int FUNC_9 (struct sd*,int,int) ;
 int** VAR_6 ;
 int** VAR_7 ;

__attribute__((used)) static int FUNC_10(struct sd *VAR_8)
{
 struct hdcs *VAR_9 = VAR_8->sensor_priv;
 int VAR_10, VAR_11 = 0;


 if (VAR_8->bridge == VAR_0)
  FUNC_8(VAR_8, VAR_5, 1);


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6) && !VAR_11; VAR_10++) {
  VAR_11 = FUNC_8(VAR_8, VAR_6[VAR_10][0],
        VAR_6[VAR_10][1]);
 }
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_4(VAR_8);


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7) && !VAR_11; VAR_10++) {
  VAR_11 = FUNC_9(VAR_8, VAR_7[VAR_10][0],
          VAR_7[VAR_10][1]);
 }
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_9(VAR_8, FUNC_2(VAR_8), FUNC_1(3));
 if (VAR_11 < 0)
  return VAR_11;



 if (FUNC_3(VAR_8))
  VAR_11 = FUNC_9(VAR_8, VAR_4,
    (VAR_1 << 6) | VAR_9->psmp);
 else
  VAR_11 = FUNC_9(VAR_8, VAR_4,
    (VAR_1 << 5) | VAR_9->psmp);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_6(VAR_8, VAR_3);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_7(VAR_8, VAR_9->array.width, VAR_9->array.height);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_5(&VAR_8->gspca_dev, VAR_2);
 return VAR_11;
}
