
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; } ;
typedef TYPE_2__ network_packet ;
struct TYPE_9__ {int data; void* data_free; int command; } ;
struct TYPE_11__ {int com_quit_seen; TYPE_1__ parse; } ;
typedef TYPE_3__ network_mysqld_con ;
typedef int guint8 ;
typedef void* GDestroyNotify ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

int FUNC_6(network_mysqld_con *VAR_4, network_packet *VAR_5) {
 guint8 VAR_6;
 int VAR_7 = 0;

 VAR_7 = VAR_7 || FUNC_5(VAR_5);
 VAR_7 = VAR_7 || FUNC_4(VAR_5, &VAR_6);

 if (VAR_7) return -1;

 VAR_4->parse.command = VAR_6;

 VAR_5->offset = 0;


 switch (VAR_4->parse.command) {
 case 131:
 case 132:
 case 129:
  VAR_4->parse.data = FUNC_2();
  VAR_4->parse.data_free = (GDestroyNotify)VAR_2;
  break;
 case 128:
  VAR_4->parse.data = FUNC_3();
  VAR_4->parse.data_free = (GDestroyNotify)VAR_3;
  break;
 case 133:
  VAR_4->parse.data = FUNC_0();
  VAR_4->parse.data_free = (GDestroyNotify)VAR_1;

  FUNC_1(VAR_5, VAR_4->parse.data);

  break;
 case 130:





  VAR_4->com_quit_seen = VAR_0;
 default:
  break;
 }

 return 0;
}
