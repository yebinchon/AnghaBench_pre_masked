
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ context; } ;
typedef TYPE_1__ nstat_msg_hdr ;
struct TYPE_7__ {scalar_t__ ncs_context; int ncs_seq; } ;
typedef TYPE_2__ nstat_control_state ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(
    nstat_control_state *VAR_4,
    const nstat_msg_hdr *VAR_5)
{
 boolean_t VAR_6 = VAR_1;

 if (VAR_5->flags & VAR_2)
 {

  VAR_6 = VAR_3;

  if (VAR_4->ncs_context != VAR_5->context)
  {
   if (VAR_4->ncs_context != 0)
    FUNC_0(VAR_4, VAR_4->ncs_context, VAR_0);


   VAR_4->ncs_context = VAR_5->context;
   VAR_4->ncs_seq++;
  }
 }

 return VAR_6;
}
