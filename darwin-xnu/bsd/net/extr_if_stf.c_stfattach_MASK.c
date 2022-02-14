
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct stf_softc {int sc_if; int sc_ro_mtx; struct encaptab const* encap_cookie; } ;
struct ifnet_init_eparams {int len; char* name; int set_bpf_tap; int ioctl; struct stf_softc* softc; int del_proto; int add_proto; int demux; int output; int family; int type; scalar_t__ unit; int flags; int ver; } ;
struct encaptab {int dummy; } ;
typedef int stf_init ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stf_softc*,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 struct stf_softc* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ifnet_init_eparams*,int) ;
 struct encaptab* FUNC_4 (int ,int ,int ,int *,struct stf_softc*) ;
 int FUNC_5 (struct encaptab const*) ;
 int FUNC_6 (struct ifnet_init_eparams*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int ) ;
 int VAR_15 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,int ,int ,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_16 () ;

void
FUNC_17(void)
{
 struct stf_softc *VAR_25;
 int VAR_26;
 const struct encaptab *VAR_27;
 struct ifnet_init_eparams VAR_28;

 FUNC_16();

 VAR_26 = FUNC_15(VAR_14, VAR_1,
     VAR_17, ((void*)0));
 if (VAR_26 != 0)
  FUNC_14("proto_register_plumber failed for AF_INET6 error=%d\n", VAR_26);

 VAR_25 = FUNC_1(sizeof(struct stf_softc), VAR_11, VAR_12 | VAR_13);
 if (VAR_25 == 0) {
  FUNC_14("stf softc attach failed\n" );
  return;
 }

 VAR_27 = FUNC_4(VAR_0, VAR_8, VAR_20,
     &VAR_15, VAR_25);
 if (VAR_27 == ((void*)0)) {
  FUNC_14("sftattach encap_attach_func failed\n");
  FUNC_0(VAR_25, VAR_11);
  return;
 }
 VAR_25->encap_cookie = VAR_27;
 FUNC_12(&VAR_25->sc_ro_mtx, VAR_22, VAR_10);

 FUNC_3(&VAR_28, sizeof(VAR_28));
 VAR_28.ver = VAR_5;
 VAR_28.len = sizeof (VAR_28);
 VAR_28.flags = VAR_6;
 VAR_28.name = "stf";
 VAR_28.unit = 0;
 VAR_28.type = VAR_7;
 VAR_28.family = VAR_4;
 VAR_28.output = VAR_23;
 VAR_28.demux = VAR_19;
 VAR_28.add_proto = VAR_16;
 VAR_28.del_proto = VAR_18;
 VAR_28.softc = VAR_25;
 VAR_28.ioctl = VAR_21;
 VAR_28.set_bpf_tap = VAR_24;

 VAR_26 = FUNC_6(&VAR_28, &VAR_25->sc_if);
 if (VAR_26 != 0) {
  FUNC_14("stfattach, ifnet_allocate failed - %d\n", VAR_26);
  FUNC_5(VAR_25->encap_cookie);
  FUNC_11(&VAR_25->sc_ro_mtx, VAR_22);
  FUNC_0(VAR_25, VAR_11);
  return;
 }
 FUNC_10(VAR_25->sc_if, VAR_9);
 FUNC_9(VAR_25->sc_if, 0, 0xffff);
 VAR_26 = FUNC_7(VAR_25->sc_if, ((void*)0));
 if (VAR_26 != 0) {
  FUNC_14("stfattach: ifnet_attach returned error=%d\n", VAR_26);
  FUNC_5(VAR_25->encap_cookie);
  FUNC_8(VAR_25->sc_if);
  FUNC_11(&VAR_25->sc_ro_mtx, VAR_22);
  FUNC_0(VAR_25, VAR_11);
  return;
 }

 FUNC_2(VAR_25->sc_if, VAR_2, sizeof(u_int));

 return;
}
