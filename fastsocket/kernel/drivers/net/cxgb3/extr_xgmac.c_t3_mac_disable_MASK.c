
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmac {scalar_t__ offset; struct adapter* adapter; scalar_t__ txen; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,scalar_t__,int,int ) ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct adapter*) ;

int FUNC_5(struct cmac *VAR_9, int VAR_10)
{
 struct adapter *VAR_11 = VAR_9->adapter;

 if (VAR_10 & VAR_8) {
  FUNC_3(VAR_11, VAR_2 + VAR_9->offset, 0);
  VAR_9->txen = 0;
 }
 if (VAR_10 & VAR_7) {
  int VAR_12 = VAR_3;

  FUNC_2(VAR_9->adapter, VAR_0 + VAR_9->offset,
     VAR_4, 0);
  FUNC_1(100);
  FUNC_3(VAR_11, VAR_1 + VAR_9->offset, 0);
  if (FUNC_0(VAR_11))
   VAR_12 |= VAR_4;
  else if (FUNC_4(VAR_11))
   VAR_12 |= VAR_4 | VAR_6;
  else
   VAR_12 |= VAR_5 | VAR_6;
  FUNC_3(VAR_9->adapter, VAR_0 + VAR_9->offset, VAR_12);
 }
 return 0;
}
