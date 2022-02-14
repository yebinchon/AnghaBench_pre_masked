
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int cda; } ;
struct raw3270_request {size_t size; TYPE_1__ ccw; int buffer; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raw3270_request* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct raw3270_request*) ;
 int FUNC_4 (size_t,int) ;
 struct raw3270_request* FUNC_5 (int,int) ;

struct raw3270_request *
FUNC_6(size_t VAR_4)
{
 struct raw3270_request *VAR_5;


 VAR_5 = FUNC_5(sizeof(struct raw3270_request), VAR_3 | VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);


 if (VAR_4 > 0) {
  VAR_5->buffer = FUNC_4(VAR_4, VAR_3 | VAR_2);
  if (!VAR_5->buffer) {
   FUNC_3(VAR_5);
   return FUNC_0(-VAR_1);
  }
 }
 VAR_5->size = VAR_4;
 FUNC_1(&VAR_5->list);




 VAR_5->ccw.cda = FUNC_2(VAR_5->buffer);
 VAR_5->ccw.flags = VAR_0;

 return VAR_5;
}
