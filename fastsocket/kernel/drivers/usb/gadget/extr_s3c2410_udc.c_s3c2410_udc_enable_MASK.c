
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int speed; } ;
struct s3c2410_udc {TYPE_3__* ep; TYPE_1__ gadget; } ;
struct TYPE_8__ {int (* udc_command ) (int ) ;} ;
struct TYPE_6__ {int maxpacket; } ;
struct TYPE_7__ {TYPE_2__ ep; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_13 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_udc *VAR_14)
{
 int VAR_15;

 FUNC_0(VAR_0, "s3c2410_udc_enable called\n");


 VAR_14->gadget.speed = VAR_12;


 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  FUNC_2(VAR_15, VAR_4);
  FUNC_2((VAR_14->ep[VAR_15].ep.maxpacket & 0x7ff) >> 3,
    VAR_6);
 }


 FUNC_2(VAR_1, VAR_7);


 FUNC_2(VAR_9 | VAR_10,
   VAR_11);


 FUNC_2(VAR_5, VAR_3);


 if (VAR_13 && VAR_13->udc_command)
  VAR_13->udc_command(VAR_8);
}
