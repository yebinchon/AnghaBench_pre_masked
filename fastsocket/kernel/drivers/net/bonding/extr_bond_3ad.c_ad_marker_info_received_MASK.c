
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int actor_port_number; } ;
struct bond_marker {int tlv_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct port*,struct bond_marker*) ;
 int FUNC_1 (struct bond_marker*,struct bond_marker*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct bond_marker *VAR_1,
 struct port *VAR_2)
{
 struct bond_marker VAR_3;



 FUNC_1(&VAR_3, VAR_1, sizeof(struct bond_marker));

 VAR_3.tlv_type=VAR_0;


 if (FUNC_0(VAR_2, &VAR_3) >= 0) {
  FUNC_2("Sent Marker Response on port %d\n", VAR_2->actor_port_number);
 }
}
