
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* len; void* offset; void* page; } ;
struct TYPE_6__ {scalar_t__ dlstate; void* dltimeout; TYPE_4__ bufinfo; scalar_t__* port_enabled; } ;
typedef TYPE_1__ hfa384x_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,void**) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (char*) ;

int FUNC_4(hfa384x_t *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_6->port_enabled[VAR_8]) {
   FUNC_3("called when port enabled.\n");
   return -VAR_0;
  }
 }


 if (VAR_6->dlstate != VAR_1)
  return -VAR_0;


 if ((VAR_7 = FUNC_0(VAR_6, VAR_4,
          &(VAR_6->bufinfo),
          sizeof(VAR_6->bufinfo)))) {
  return VAR_7;
 }
 VAR_6->bufinfo.page = FUNC_2(VAR_6->bufinfo.page);
 VAR_6->bufinfo.offset = FUNC_2(VAR_6->bufinfo.offset);
 VAR_6->bufinfo.len = FUNC_2(VAR_6->bufinfo.len);
 if ((VAR_7 = FUNC_1(VAR_6, VAR_5,
            &(VAR_6->dltimeout)))) {
  return VAR_7;
 }
 VAR_6->dltimeout = FUNC_2(VAR_6->dltimeout);

 FUNC_3("flashdl_enable\n");

 VAR_6->dlstate = VAR_2;

 return VAR_7;
}
