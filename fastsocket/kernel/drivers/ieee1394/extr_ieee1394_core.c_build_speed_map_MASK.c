
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct selfid {scalar_t__ port0; scalar_t__ port1; scalar_t__ port2; scalar_t__ speed; scalar_t__ extended; } ;
struct TYPE_2__ {scalar_t__ lnk_spd; } ;
struct hpsb_host {int selfid_count; int * topology_map; TYPE_1__ csr; scalar_t__* speed; scalar_t__* speed_map; } ;
struct ext_selfid {scalar_t__ porta; scalar_t__ portb; scalar_t__ portc; scalar_t__ portd; scalar_t__ porte; scalar_t__ portf; scalar_t__ portg; scalar_t__ porth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hpsb_host *VAR_3, int VAR_4)
{
 u8 VAR_5[VAR_4];
 u8 *VAR_6 = VAR_3->speed_map;
 u8 *VAR_7 = VAR_3->speed;
 u8 VAR_8 = VAR_3->csr.lnk_spd;
 struct selfid *VAR_9;
 struct ext_selfid *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 for (VAR_11 = 0; VAR_11 < (VAR_4 * 64); VAR_11 += 64) {
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   VAR_6[VAR_11+VAR_12] = VAR_0;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_5[VAR_11] = 0;
 }


 for (VAR_9 = (struct selfid *)&VAR_3->topology_map[VAR_3->selfid_count-1],
       VAR_13 = VAR_4 - 1;
      (void *)VAR_9 >= (void *)VAR_3->topology_map; VAR_9--) {
  if (VAR_9->extended) {
   VAR_10 = (struct ext_selfid *)VAR_9;

   if (VAR_10->porta == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->portb == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->portc == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->portd == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->porte == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->portf == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->portg == VAR_1) VAR_5[VAR_13]++;
   if (VAR_10->porth == VAR_1) VAR_5[VAR_13]++;
                } else {
   if (VAR_9->port0 == VAR_1) VAR_5[VAR_13]++;
   if (VAR_9->port1 == VAR_1) VAR_5[VAR_13]++;
   if (VAR_9->port2 == VAR_1) VAR_5[VAR_13]++;

   VAR_7[VAR_13] = VAR_9->speed;
   if (VAR_7[VAR_13] > VAR_8)
    VAR_7[VAR_13] = VAR_8;
   VAR_13--;
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_6[64*VAR_11 + VAR_11] = VAR_7[VAR_11];
 }



 for (VAR_11 = 1; VAR_11 < VAR_4; VAR_11++) {
  for (VAR_12 = VAR_5[VAR_11], VAR_13 = VAR_11 - 1; VAR_12 > 0; VAR_12--) {
   VAR_5[VAR_11] += VAR_5[VAR_13];
   VAR_7[VAR_13] = FUNC_0(VAR_7[VAR_13], VAR_7[VAR_11]);
   VAR_13 -= VAR_5[VAR_13] + 1;
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  for (VAR_11 = VAR_13 - VAR_5[VAR_13]; VAR_11 <= VAR_13; VAR_11++) {
   for (VAR_12 = 0; VAR_12 < (VAR_13 - VAR_5[VAR_13]); VAR_12++) {
    VAR_6[VAR_12*64 + VAR_11] = VAR_6[VAR_11*64 + VAR_12] =
     FUNC_0(VAR_6[VAR_11*64 + VAR_12], VAR_7[VAR_13]);
   }
   for (VAR_12 = VAR_13 + 1; VAR_12 < VAR_4; VAR_12++) {
    VAR_6[VAR_12*64 + VAR_11] = VAR_6[VAR_11*64 + VAR_12] =
     FUNC_0(VAR_6[VAR_11*64 + VAR_12], VAR_7[VAR_13]);
   }
  }
 }


 if (VAR_8 > VAR_2)
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   if (VAR_7[VAR_11] == VAR_2)
    VAR_7[VAR_11] = VAR_8;
}
