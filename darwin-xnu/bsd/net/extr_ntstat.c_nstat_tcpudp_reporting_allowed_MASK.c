
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct socket {scalar_t__ last_pid; int so_flags; scalar_t__ e_upid; int last_uuid; int e_uuid; } ;
struct nstat_tucookie {struct inpcb* inp; } ;
struct inpcb {struct socket* inp_socket; TYPE_3__* inp_Wstat; TYPE_2__* inp_wstat; TYPE_1__* inp_cstat; } ;
struct TYPE_9__ {int npf_flags; scalar_t__ npf_pid; int npf_uuid; } ;
typedef TYPE_4__ nstat_provider_filter ;
typedef scalar_t__ nstat_provider_cookie_t ;
struct TYPE_8__ {scalar_t__ txbytes; scalar_t__ rxbytes; } ;
struct TYPE_7__ {scalar_t__ txbytes; scalar_t__ rxbytes; } ;
struct TYPE_6__ {scalar_t__ txbytes; scalar_t__ rxbytes; } ;


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
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct inpcb*) ;

__attribute__((used)) static bool
FUNC_2(nstat_provider_cookie_t VAR_11, nstat_provider_filter *VAR_12, bool VAR_13)
{
 bool VAR_14 = 1;

 if ((VAR_12->npf_flags & (VAR_4|VAR_5)) != 0)
 {
  struct nstat_tucookie *VAR_15 = (struct nstat_tucookie *)VAR_11;
  struct inpcb *VAR_16 = VAR_15->inp;


  if ((VAR_12->npf_flags & VAR_4) != 0)
  {
   uint16_t VAR_17 = FUNC_1(VAR_16);

   if ((VAR_12->npf_flags & VAR_17) == 0)
   {




    if (VAR_13)
    {
     do
     {
      if ((VAR_12->npf_flags & (VAR_0|VAR_1)) &&
       (VAR_16->inp_cstat->rxbytes || VAR_16->inp_cstat->txbytes))
      {
       break;
      }
      if ((VAR_12->npf_flags & VAR_2) &&
       (VAR_16->inp_wstat->rxbytes || VAR_16->inp_wstat->txbytes))
      {
       break;
      }
      if ((VAR_12->npf_flags & VAR_3) &&
       (VAR_16->inp_Wstat->rxbytes || VAR_16->inp_Wstat->txbytes))
      {
       break;
      }
      return 0;
     } while (0);
    }
    else
    {
     return 0;
    }
   }
  }

  if (((VAR_12->npf_flags & VAR_5) != 0) && (VAR_14))
  {
   struct socket *VAR_18 = VAR_16->inp_socket;
   VAR_14 = 0;

   if (VAR_18)
   {
    if (((VAR_12->npf_flags & VAR_8) != 0) &&
     (VAR_12->npf_pid == VAR_18->last_pid))
    {
     VAR_14 = 1;
    }
    else if (((VAR_12->npf_flags & VAR_6) != 0) &&
     (VAR_12->npf_pid == (VAR_18->so_flags & VAR_10)? VAR_18->e_upid : VAR_18->last_pid))
    {
     VAR_14 = 1;
    }
    else if (((VAR_12->npf_flags & VAR_9) != 0) &&
     (FUNC_0(VAR_12->npf_uuid, VAR_18->last_uuid, sizeof(VAR_18->last_uuid)) == 0))
    {
     VAR_14 = 1;
    }
    else if (((VAR_12->npf_flags & VAR_7) != 0) &&
     (FUNC_0(VAR_12->npf_uuid, (VAR_18->so_flags & VAR_10)? VAR_18->e_uuid : VAR_18->last_uuid,
      sizeof(VAR_18->last_uuid)) == 0))
    {
     VAR_14 = 1;
    }
   }
  }
 }
 return VAR_14;
}
