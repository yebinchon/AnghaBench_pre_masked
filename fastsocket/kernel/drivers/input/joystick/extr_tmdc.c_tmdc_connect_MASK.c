
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmdc {int exists; struct tmdc** port; int dev; struct gameport* gameport; } ;
struct gameport_driver {int dummy; } ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,struct gameport_driver*,int ) ;
 int FUNC_2 (struct gameport*,struct tmdc*) ;
 int FUNC_3 (struct gameport*,int ) ;
 int FUNC_4 (struct gameport*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tmdc*) ;
 struct tmdc* FUNC_7 (int,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct gameport*,unsigned char**) ;
 int FUNC_9 (struct tmdc*,int,unsigned char*) ;

__attribute__((used)) static int FUNC_10(struct gameport *VAR_6, struct gameport_driver *VAR_7)
{
 unsigned char VAR_8[2][VAR_4];
 struct tmdc *VAR_9;
 int VAR_10;
 int VAR_11;

 if (!(VAR_9 = FUNC_7(sizeof(struct tmdc), VAR_3)))
  return -VAR_1;

 VAR_9->gameport = VAR_6;

 FUNC_2(VAR_6, VAR_9);

 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_2);
 if (VAR_11)
  goto fail1;

 if (!(VAR_9->exists = FUNC_8(VAR_6, VAR_8))) {
  VAR_11 = -VAR_0;
  goto fail2;
 }

 FUNC_3(VAR_6, VAR_5);
 FUNC_4(VAR_6, 20);

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  if (VAR_9->exists & (1 << VAR_10)) {

   VAR_11 = FUNC_9(VAR_9, VAR_10, VAR_8[VAR_10]);
   if (VAR_11)
    goto fail3;
  }
 }

 return 0;

 fail3: while (--VAR_10 >= 0) {
  if (VAR_9->port[VAR_10]) {
   FUNC_5(VAR_9->port[VAR_10]->dev);
   FUNC_6(VAR_9->port[VAR_10]);
  }
 }
 fail2: FUNC_0(VAR_6);
 fail1: FUNC_2(VAR_6, ((void*)0));
 FUNC_6(VAR_9);
 return VAR_11;
}
