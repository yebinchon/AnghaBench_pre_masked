
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int tail; int space; int tail_mask; int * start; } ;
struct TYPE_6__ {int flags; TYPE_1__ ring; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,int) ;

void FUNC_5(drm_radeon_private_t *VAR_7)
{
 int VAR_8;
 u32 *VAR_9;
 int VAR_10;



 VAR_10 = VAR_7->ring.tail & (VAR_6-1);
 if (VAR_10) {
  int VAR_11 = VAR_6 - VAR_10;

  VAR_9 = VAR_7->ring.start;

  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
   VAR_9[VAR_7->ring.tail + VAR_8] = FUNC_0();

  VAR_7->ring.tail += VAR_8;

  VAR_7->ring.space -= VAR_11 * sizeof(u32);
 }

 VAR_7->ring.tail &= VAR_7->ring.tail_mask;

 FUNC_1();
 FUNC_2( VAR_7 );

 if ((VAR_7->flags & VAR_5) >= VAR_0) {
  FUNC_4(VAR_2, VAR_7->ring.tail);

  FUNC_3(VAR_1);
 } else {
  FUNC_4(VAR_4, VAR_7->ring.tail);

  FUNC_3(VAR_3);
 }
}
