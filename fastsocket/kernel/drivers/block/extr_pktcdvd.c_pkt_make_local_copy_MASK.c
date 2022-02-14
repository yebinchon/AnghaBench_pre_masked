
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int frames; scalar_t__* pages; } ;
struct bio_vec {scalar_t__ bv_page; int bv_offset; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct packet_data *VAR_3, struct bio_vec *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;


 VAR_6 = 0;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->frames; VAR_5++) {
  if (VAR_4[VAR_5].bv_page != VAR_3->pages[VAR_6]) {
   void *VAR_8 = FUNC_1(VAR_4[VAR_5].bv_page, VAR_1) + VAR_4[VAR_5].bv_offset;
   void *VAR_9 = FUNC_4(VAR_3->pages[VAR_6]) + VAR_7;
   FUNC_3(VAR_9, VAR_8, VAR_0);
   FUNC_2(VAR_8, VAR_1);
   VAR_4[VAR_5].bv_page = VAR_3->pages[VAR_6];
   VAR_4[VAR_5].bv_offset = VAR_7;
  } else {
   FUNC_0(VAR_4[VAR_5].bv_offset != VAR_7);
  }
  VAR_7 += VAR_0;
  if (VAR_7 >= VAR_2) {
   VAR_7 = 0;
   VAR_6++;
  }
 }
}
