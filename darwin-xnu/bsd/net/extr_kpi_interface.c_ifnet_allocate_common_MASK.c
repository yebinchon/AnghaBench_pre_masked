
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_init_params {int broadcast_len; int broadcast_addr; int event; int detach; int set_bpf_tap; int ioctl; int softc; int framer; int check_multi; int del_proto; int add_proto; int demux; int output; int type; int family; int unit; int name; int uniqueid_len; int uniqueid; } ;
struct ifnet_init_eparams {int len; int flags; int broadcast_len; int broadcast_addr; int event; int detach; int set_bpf_tap; int ioctl; int softc; int framer; int check_multi; int del_proto; int add_proto; int demux; int output; int type; int family; int unit; int name; int uniqueid_len; int uniqueid; int ver; } ;
typedef int ifnet_t ;
typedef int errno_t ;
typedef int einit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet_init_eparams*,int) ;
 int FUNC_1 (struct ifnet_init_eparams*,int *) ;

errno_t
FUNC_2(const struct ifnet_init_params *VAR_4,
    ifnet_t *VAR_5, bool VAR_6)
{
 struct ifnet_init_eparams VAR_7;

 FUNC_0(&VAR_7, sizeof (VAR_7));

 VAR_7.ver = VAR_1;
 VAR_7.len = sizeof (VAR_7);
 VAR_7.flags = VAR_2 | VAR_3;
 if (!VAR_6) {
  VAR_7.flags |= VAR_0;
 }
 VAR_7.uniqueid = VAR_4->uniqueid;
 VAR_7.uniqueid_len = VAR_4->uniqueid_len;
 VAR_7.name = VAR_4->name;
 VAR_7.unit = VAR_4->unit;
 VAR_7.family = VAR_4->family;
 VAR_7.type = VAR_4->type;
 VAR_7.output = VAR_4->output;
 VAR_7.demux = VAR_4->demux;
 VAR_7.add_proto = VAR_4->add_proto;
 VAR_7.del_proto = VAR_4->del_proto;
 VAR_7.check_multi = VAR_4->check_multi;
 VAR_7.framer = VAR_4->framer;
 VAR_7.softc = VAR_4->softc;
 VAR_7.ioctl = VAR_4->ioctl;
 VAR_7.set_bpf_tap = VAR_4->set_bpf_tap;
 VAR_7.detach = VAR_4->detach;
 VAR_7.event = VAR_4->event;
 VAR_7.broadcast_addr = VAR_4->broadcast_addr;
 VAR_7.broadcast_len = VAR_4->broadcast_len;

 return (FUNC_1(&VAR_7, VAR_5));
}
