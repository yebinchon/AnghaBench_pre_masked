
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int station_mode; int listen_int; } ;
typedef enum wl1251_station_mode { ____Placeholder_wl1251_station_mode } wl1251_station_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct wl1251*,int) ;
 int FUNC_1 (struct wl1251*,int ,int ) ;
 int FUNC_2 (struct wl1251*,int ) ;
 int FUNC_3 (struct wl1251*,int ,int ) ;
 int FUNC_4 (struct wl1251*,int ) ;
 int FUNC_5 (struct wl1251*,int ,int *,int ) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct wl1251 *VAR_10, enum wl1251_station_mode VAR_11)
{
 int VAR_12;

 switch (VAR_11) {
 case 128:
  FUNC_6(VAR_3, "entering psm");


  VAR_12 = FUNC_0(VAR_10, 1);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_3(VAR_10,
          VAR_4,
          VAR_10->listen_int);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_1(VAR_10, VAR_6,
         VAR_7);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_4(VAR_10, VAR_1);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_2(VAR_10, VAR_9);
  if (VAR_12 < 0)
   return VAR_12;
  break;
 case 129:
  FUNC_6(VAR_3, "entering idle");

  VAR_12 = FUNC_2(VAR_10, VAR_9);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_5(VAR_10, VAR_2, ((void*)0), 0);
  if (VAR_12 < 0)
   return VAR_12;
  break;
 case 130:
 default:
  FUNC_6(VAR_3, "leaving psm");

  VAR_12 = FUNC_2(VAR_10, VAR_8);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_1(VAR_10, VAR_5,
         VAR_7);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_0(VAR_10, 0);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_3(VAR_10,
          VAR_4,
          VAR_10->listen_int);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_4(VAR_10, VAR_0);
  if (VAR_12 < 0)
   return VAR_12;

  break;
 }
 VAR_10->station_mode = VAR_11;

 return VAR_12;
}
