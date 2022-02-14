
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int frames; struct bio* w_bio; int * pages; struct bio** r_bios; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct packet_data*) ;

__attribute__((used)) static void FUNC_3(struct packet_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->frames; VAR_2++) {
  struct bio *VAR_3 = VAR_1->r_bios[VAR_2];
  if (VAR_3)
   FUNC_1(VAR_3);
 }
 for (VAR_2 = 0; VAR_2 < VAR_1->frames / VAR_0; VAR_2++)
  FUNC_0(VAR_1->pages[VAR_2]);
 FUNC_1(VAR_1->w_bio);
 FUNC_2(VAR_1);
}
