
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int type; int generation; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;


 int FUNC_0 (struct hpsb_host*) ;
 struct hpsb_packet* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct hpsb_packet *FUNC_2(struct hpsb_host *VAR_1)
{
 struct hpsb_packet *VAR_2;

 VAR_2 = FUNC_1(0);
 if (VAR_2) {
  VAR_2->host = VAR_1;
  VAR_2->generation = FUNC_0(VAR_1);
  VAR_2->type = VAR_0;
 }
 return VAR_2;
}
