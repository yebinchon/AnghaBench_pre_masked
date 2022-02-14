
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int frames; struct bio* w_bio; scalar_t__* pages; struct bio** r_bios; int lock; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct packet_data*) ;
 struct packet_data* FUNC_4 (int,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct packet_data *FUNC_7(int VAR_3)
{
 int VAR_4;
 struct packet_data *VAR_5;

 VAR_5 = FUNC_4(sizeof(struct packet_data), VAR_1);
 if (!VAR_5)
  goto no_pkt;

 VAR_5->frames = VAR_3;
 VAR_5->w_bio = FUNC_5(VAR_3);
 if (!VAR_5->w_bio)
  goto no_bio;

 for (VAR_4 = 0; VAR_4 < VAR_3 / VAR_0; VAR_4++) {
  VAR_5->pages[VAR_4] = FUNC_1(VAR_1|VAR_2);
  if (!VAR_5->pages[VAR_4])
   goto no_page;
 }

 FUNC_6(&VAR_5->lock);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct bio *VAR_6 = FUNC_5(1);
  if (!VAR_6)
   goto no_rd_bio;
  VAR_5->r_bios[VAR_4] = VAR_6;
 }

 return VAR_5;

no_rd_bio:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct bio *VAR_7 = VAR_5->r_bios[VAR_4];
  if (VAR_7)
   FUNC_2(VAR_7);
 }

no_page:
 for (VAR_4 = 0; VAR_4 < VAR_3 / VAR_0; VAR_4++)
  if (VAR_5->pages[VAR_4])
   FUNC_0(VAR_5->pages[VAR_4]);
 FUNC_2(VAR_5->w_bio);
no_bio:
 FUNC_3(VAR_5);
no_pkt:
 return ((void*)0);
}
