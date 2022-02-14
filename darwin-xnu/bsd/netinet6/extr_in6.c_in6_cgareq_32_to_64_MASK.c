
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;
struct TYPE_8__ {int octets; } ;
struct TYPE_9__ {int cga_security_level; TYPE_2__ cga_modifier; } ;
struct in6_cgareq_64 {TYPE_5__ cgar_lifetime; TYPE_3__ cgar_cgaprep; int cgar_flags; int cgar_name; } ;
struct TYPE_12__ {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;
struct TYPE_7__ {int octets; } ;
struct TYPE_10__ {int cga_security_level; TYPE_1__ cga_modifier; } ;
struct in6_cgareq_32 {TYPE_6__ cgar_lifetime; TYPE_4__ cgar_cgaprep; int cgar_flags; int cgar_name; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct in6_cgareq_64*,int) ;

void
FUNC_2(struct in6_cgareq_32 *VAR_0,
    struct in6_cgareq_64 *VAR_1)
{
 FUNC_1(VAR_1, sizeof (*VAR_1));
 FUNC_0(VAR_0->cgar_name, VAR_1->cgar_name, sizeof (VAR_1->cgar_name));
 VAR_1->cgar_flags = VAR_0->cgar_flags;
 FUNC_0(VAR_0->cgar_cgaprep.cga_modifier.octets,
     VAR_1->cgar_cgaprep.cga_modifier.octets,
     sizeof (VAR_1->cgar_cgaprep.cga_modifier.octets));
 VAR_1->cgar_cgaprep.cga_security_level =
     VAR_0->cgar_cgaprep.cga_security_level;
 VAR_1->cgar_lifetime.ia6t_expire = VAR_0->cgar_lifetime.ia6t_expire;
 VAR_1->cgar_lifetime.ia6t_preferred = VAR_0->cgar_lifetime.ia6t_preferred;
 VAR_1->cgar_lifetime.ia6t_vltime = VAR_0->cgar_lifetime.ia6t_vltime;
 VAR_1->cgar_lifetime.ia6t_pltime = VAR_0->cgar_lifetime.ia6t_pltime;
}
