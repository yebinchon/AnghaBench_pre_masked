
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int node; TYPE_1__* elevator; } ;
struct io_context {int dummy; } ;
struct as_data {scalar_t__ antic_status; struct io_context* io_context; } ;
struct TYPE_2__ {struct as_data* elevator_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct io_context* FUNC_0 (int ) ;
 int FUNC_1 (struct io_context*) ;

__attribute__((used)) static int FUNC_2(struct request_queue *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2;
 struct as_data *VAR_7 = VAR_4->elevator->elevator_data;
 struct io_context *VAR_8;
 if (VAR_7->antic_status == VAR_1 ||
   VAR_7->antic_status == VAR_0) {
  VAR_8 = FUNC_0(VAR_4->node);
  if (VAR_7->io_context == VAR_8)
   VAR_6 = VAR_3;
  FUNC_1(VAR_8);
 }

 return VAR_6;
}
