
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_15__ {scalar_t__ spi; } ;
struct TYPE_16__ {TYPE_7__ xport; int addr; } ;
struct TYPE_11__ {scalar_t__ spi; } ;
struct TYPE_12__ {TYPE_3__ xport; int addr; } ;
struct pf_state_key {int proto; int af_lan; TYPE_8__ lan; TYPE_4__ ext_lan; } ;
struct TYPE_13__ {scalar_t__ spi; } ;
struct TYPE_14__ {TYPE_5__ xport; int addr; } ;
struct TYPE_9__ {scalar_t__ spi; } ;
struct TYPE_10__ {TYPE_1__ xport; int addr; } ;
struct pf_flowhash_key {int proto; int af; TYPE_6__ ap2; TYPE_2__ ap1; } ;
typedef int fh ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct pf_flowhash_key*,int) ;
 scalar_t__ FUNC_4 (struct pf_flowhash_key*,int,int ) ;
 int VAR_0 ;

u_int32_t
FUNC_5(struct pf_state_key *VAR_1)
{
 struct pf_flowhash_key VAR_2 __attribute__((aligned(8)));
 uint32_t VAR_3 = 0;

 FUNC_3(&VAR_2, sizeof (VAR_2));
 if (FUNC_0(&VAR_1->lan.addr, &VAR_1->ext_lan.addr, VAR_1->af_lan)) {
  FUNC_2(&VAR_1->lan.addr, &VAR_2.ap1.addr, sizeof (VAR_2.ap1.addr));
  FUNC_2(&VAR_1->ext_lan.addr, &VAR_2.ap2.addr, sizeof (VAR_2.ap2.addr));
 } else {
  FUNC_2(&VAR_1->ext_lan.addr, &VAR_2.ap1.addr, sizeof (VAR_2.ap1.addr));
  FUNC_2(&VAR_1->lan.addr, &VAR_2.ap2.addr, sizeof (VAR_2.ap2.addr));
 }
 if (VAR_1->lan.xport.spi <= VAR_1->ext_lan.xport.spi) {
  VAR_2.ap1.xport.spi = VAR_1->lan.xport.spi;
  VAR_2.ap2.xport.spi = VAR_1->ext_lan.xport.spi;
 } else {
  VAR_2.ap1.xport.spi = VAR_1->ext_lan.xport.spi;
  VAR_2.ap2.xport.spi = VAR_1->lan.xport.spi;
 }
 VAR_2.af = VAR_1->af_lan;
 VAR_2.proto = VAR_1->proto;

try_again:
 VAR_3 = FUNC_4(&VAR_2, sizeof (VAR_2), VAR_0);
 if (VAR_3 == 0) {

  VAR_0 = FUNC_1();
  goto try_again;
 }

 return (VAR_3);
}
