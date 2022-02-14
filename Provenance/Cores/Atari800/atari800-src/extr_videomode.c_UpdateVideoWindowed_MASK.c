
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;
typedef int VIDEOMODE_MODE_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ,unsigned int,unsigned int,double*,double*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned int*,unsigned int*,double,double) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (unsigned int*,unsigned int*,int ) ;
 TYPE_1__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,unsigned int,unsigned int,int,int) ;
 int VAR_1 ;
 int FUNC_9 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_10(int VAR_6)
{
 VIDEOMODE_MODE_t VAR_7 = FUNC_2();




 int VAR_8 = VAR_0;

 unsigned int VAR_9, VAR_10;
 double VAR_11, VAR_12;
 VIDEOMODE_resolution_t VAR_13 = *FUNC_4();
 VIDEOMODE_resolution_t VAR_14 = VAR_5;
 VIDEOMODE_resolution_t *VAR_15;
 int VAR_16 = FUNC_6();

 if (VAR_8)
  FUNC_7(&VAR_14);

 FUNC_3(&VAR_9, &VAR_10, VAR_7);
 FUNC_9();
 FUNC_0(&VAR_14, &VAR_13, VAR_7, VAR_9, VAR_10, &VAR_11, &VAR_12, VAR_8);
 if (VAR_6 || VAR_16)

  VAR_15 = &VAR_14;
 else

  VAR_15 = &VAR_13;
 FUNC_1(VAR_15, &VAR_9, &VAR_10, VAR_11, VAR_12);
 if (!VAR_6 && !VAR_16) {
  VAR_14.width = VAR_3;
  VAR_14.height = VAR_2;
 }
 FUNC_8(&VAR_14, VAR_7, VAR_9, VAR_10, VAR_1, VAR_8);
 return VAR_1;
}
