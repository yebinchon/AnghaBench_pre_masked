
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dummy; } ;
struct packet_stacked_data {int bio; struct pktcdvd_device* pd; } ;
struct bio {struct packet_stacked_data* bi_private; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct packet_stacked_data*,int ) ;
 int FUNC_3 (struct pktcdvd_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1, int VAR_2)
{
 struct packet_stacked_data *VAR_3 = VAR_1->bi_private;
 struct pktcdvd_device *VAR_4 = VAR_3->pd;

 FUNC_1(VAR_1);
 FUNC_0(VAR_3->bio, VAR_2);
 FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_4);
}
