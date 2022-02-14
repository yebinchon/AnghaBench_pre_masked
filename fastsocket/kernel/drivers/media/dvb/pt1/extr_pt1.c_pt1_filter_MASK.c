
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pt1_buffer_page {int * upackets; } ;
struct pt1_adapter {int upacket_count; int* buf; int packet_count; int demux; } ;
struct pt1 {struct pt1_adapter** adaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pt1 *VAR_2, struct pt1_buffer_page *VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 int VAR_6;
 struct pt1_adapter *VAR_7;
 int VAR_8;
 u8 *VAR_9;

 if (!VAR_3->upackets[VAR_1 - 1])
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3->upackets[VAR_5]);
  VAR_6 = (VAR_4 >> 29) - 1;
  if (VAR_6 < 0 || VAR_6 >= VAR_0)
   continue;

  VAR_7 = VAR_2->adaps[VAR_6];
  if (VAR_4 >> 25 & 1)
   VAR_7->upacket_count = 0;
  else if (!VAR_7->upacket_count)
   continue;

  VAR_9 = VAR_7->buf;
  VAR_8 = VAR_7->packet_count * 188 + VAR_7->upacket_count * 3;
  VAR_9[VAR_8] = VAR_4 >> 16;
  VAR_9[VAR_8 + 1] = VAR_4 >> 8;
  if (VAR_7->upacket_count != 62)
   VAR_9[VAR_8 + 2] = VAR_4;

  if (++VAR_7->upacket_count >= 63) {
   VAR_7->upacket_count = 0;
   if (++VAR_7->packet_count >= 21) {
    FUNC_0(&VAR_7->demux, VAR_9, 21);
    VAR_7->packet_count = 0;
   }
  }
 }

 VAR_3->upackets[VAR_1 - 1] = 0;
 return 1;
}
