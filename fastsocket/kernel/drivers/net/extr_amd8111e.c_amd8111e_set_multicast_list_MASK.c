
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct amd8111e_priv {scalar_t__ mmio; struct dev_mc_list* mc_list; int options; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 struct amd8111e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_9)
{
 struct dev_mc_list* VAR_10;
 struct amd8111e_priv *VAR_11 = FUNC_2(VAR_9);
 u32 VAR_12[2] ;
 int VAR_13,VAR_14;
 if(VAR_9->flags & VAR_3){
  FUNC_4( VAR_8 | VAR_7, VAR_11->mmio + VAR_0);
  return;
 }
 else
  FUNC_4( VAR_7, VAR_11->mmio + VAR_0);
 if(VAR_9->flags & VAR_2 || VAR_9->mc_count > VAR_5){

  VAR_12[1] = VAR_12[0] = 0xffffffff;
  VAR_11->mc_list = VAR_9->mc_list;
  VAR_11->options |= VAR_6;
  FUNC_0(*(u64*)VAR_12,VAR_11->mmio + VAR_4);
  return;
 }
 if( VAR_9->mc_count == 0 ){

  VAR_12[1] = VAR_12[0] = 0;
  VAR_11->mc_list = ((void*)0);
  VAR_11->options &= ~VAR_6;
  FUNC_0(*(u64*)VAR_12,VAR_11->mmio + VAR_4);

  FUNC_4(VAR_7, VAR_11->mmio + VAR_0);
  return;
 }

 VAR_11->options |= VAR_6;
 VAR_11->mc_list = VAR_9->mc_list;
 VAR_12[1] = VAR_12[0] = 0;
 for (VAR_13 = 0, VAR_10 = VAR_9->mc_list; VAR_10 && VAR_13 < VAR_9->mc_count;
       VAR_13++, VAR_10 = VAR_10->next) {
  VAR_14 = (FUNC_1(VAR_1, VAR_10->dmi_addr) >> 26) & 0x3f;
  VAR_12[VAR_14 >> 5] |= 1 << (VAR_14 & 31);
 }
 FUNC_0(*(u64*)VAR_12,VAR_11->mmio+ VAR_4);


 FUNC_3(VAR_11->mmio + VAR_0);

}
