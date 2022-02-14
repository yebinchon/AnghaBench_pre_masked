
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fwnet_peer {int guid; int peer_link; int node_id; int generation; int speed; int max_payload; scalar_t__ datagram_label; scalar_t__ pdg_size; int pd_list; int fifo; struct fwnet_device* dev; } ;
struct fwnet_device {int lock; int peer_list; } ;
struct fw_unit {int device; } ;
struct fw_device {int* config_rom; int node_id; int generation; int max_rec; int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fwnet_peer*) ;
 int FUNC_2 (int ,int ) ;
 struct fwnet_peer* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct fwnet_device *VAR_3,
     struct fw_unit *VAR_4, struct fw_device *VAR_5)
{
 struct fwnet_peer *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_4->device, VAR_6);

 VAR_6->dev = VAR_3;
 VAR_6->guid = (u64)VAR_5->config_rom[3] << 32 | VAR_5->config_rom[4];
 VAR_6->fifo = VAR_1;
 FUNC_0(&VAR_6->pd_list);
 VAR_6->pdg_size = 0;
 VAR_6->datagram_label = 0;
 VAR_6->speed = VAR_5->max_speed;
 VAR_6->max_payload = FUNC_2(VAR_5->max_rec, VAR_6->speed);

 VAR_6->generation = VAR_5->generation;
 FUNC_5();
 VAR_6->node_id = VAR_5->node_id;

 FUNC_6(&VAR_3->lock);
 FUNC_4(&VAR_6->peer_link, &VAR_3->peer_list);
 FUNC_7(&VAR_3->lock);

 return 0;
}
