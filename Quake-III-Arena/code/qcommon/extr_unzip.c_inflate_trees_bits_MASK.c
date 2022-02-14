
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef scalar_t__ uInt ;
typedef int inflate_huft ;
struct TYPE_5__ {char* msg; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (scalar_t__*,int,int,scalar_t__*,scalar_t__*,int **,scalar_t__*,int *,scalar_t__*,scalar_t__*) ;

int FUNC_3(uInt *VAR_4, uInt *VAR_5, inflate_huft * *VAR_6, inflate_huft *VAR_7, z_streamp VAR_8)





{
  int VAR_9;
  uInt VAR_10 = 0;
  uInt *VAR_11;

  if ((VAR_11 = (uInt*)FUNC_0(VAR_8, 19, sizeof(uInt))) == VAR_3)
    return VAR_2;
  VAR_9 = FUNC_2(VAR_4, 19, 19, (uInt*)VAR_3, (uInt*)VAR_3,
                 VAR_6, VAR_5, VAR_7, &VAR_10, VAR_11);
  if (VAR_9 == VAR_1)
    VAR_8->msg = (char*)"oversubscribed dynamic bit lengths tree";
  else if (VAR_9 == VAR_0 || *VAR_5 == 0)
  {
    VAR_8->msg = (char*)"incomplete dynamic bit lengths tree";
    VAR_9 = VAR_1;
  }
  FUNC_1(VAR_8, VAR_11);
  return VAR_9;
}
