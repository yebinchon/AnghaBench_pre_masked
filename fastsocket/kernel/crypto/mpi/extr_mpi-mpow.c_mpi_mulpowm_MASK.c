
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * MPI ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int,int,int) ;
 int FUNC_2 (int **) ;
 int ** FUNC_3 (int,int ) ;
 int * FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (char*) ;

int
FUNC_13( MPI VAR_2, MPI *VAR_3, MPI *VAR_4, MPI VAR_5)
{
 int VAR_6 = -VAR_0;
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;
 MPI *VAR_12 = ((void*)0);
 MPI VAR_13 = ((void*)0);

 for(VAR_7=0; VAR_3[VAR_7]; VAR_7++ )
  ;
 if (!VAR_7) { FUNC_12("mpi_mulpowm: assert(k) failed\n"); FUNC_0(); }
 for(VAR_8=0, VAR_9=0; (VAR_13=VAR_4[VAR_9]); VAR_9++ ) {
  VAR_10 = FUNC_8(VAR_13);
  if( VAR_10 > VAR_8 )
   VAR_8 = VAR_10;
 }
 if (VAR_9!=VAR_7) { FUNC_12("mpi_mulpowm: assert(i==k) failed\n"); FUNC_0(); }
 if (!VAR_8) { FUNC_12("mpi_mulpowm: assert(t) failed\n"); FUNC_0(); }
 if (VAR_7>=10) { FUNC_12("mpi_mulpowm: assert(k<10) failed\n"); FUNC_0(); }

 VAR_12 = FUNC_3( (1<<VAR_7) * sizeof *VAR_12, VAR_1 );
 if (!VAR_12) goto nomem;


 VAR_13 = FUNC_4( FUNC_9(VAR_5)+1 ); if (!VAR_13) goto nomem;
 if (FUNC_11( VAR_2, 1 ) < 0) goto nomem;
 for(VAR_9 = 1; VAR_9 <= VAR_8; VAR_9++ ) {
  if (FUNC_10(VAR_13, VAR_2, VAR_2, VAR_5 ) < 0) goto nomem;
  VAR_11 = FUNC_1( VAR_4, VAR_7, VAR_9, VAR_8 );
  if (!(VAR_11 >= 0 && VAR_11 < (1<<VAR_7))) {
   FUNC_12("mpi_mulpowm: assert(idx >= 0 && idx < (1<<k)) failed\n");
   FUNC_0();
  }
  if( !VAR_12[VAR_11] ) {
   if( !VAR_11 ) {
    VAR_12[0] = FUNC_5( 1 );
    if (!VAR_12[0]) goto nomem;
   }
   else {
    for(VAR_10=0; VAR_10 < VAR_7; VAR_10++ ) {
     if( (VAR_11 & (1<<VAR_10) ) ) {
      if( !VAR_12[VAR_11] ) {
       if (FUNC_6( &VAR_12[VAR_11], VAR_3[VAR_10] ) < 0)
        goto nomem;
      }
      else {
       if (FUNC_10(VAR_12[VAR_11],VAR_12[VAR_11],VAR_3[VAR_10],VAR_5) < 0)
        goto nomem;
      }
     }
    }
    if( !VAR_12[VAR_11] ) {
     VAR_12[VAR_11] = FUNC_4(0);
     if (!VAR_12[VAR_11]) goto nomem;
    }
   }
  }
  if (FUNC_10(VAR_2, VAR_13, VAR_12[VAR_11], VAR_5 ) < 0) goto nomem;
 }

 VAR_6 = 0;
 nomem:

 FUNC_7(VAR_13);
 for(VAR_9=0; VAR_9 < (1<<VAR_7); VAR_9++ )
  FUNC_7(VAR_12[VAR_9]);
 FUNC_2(VAR_12);
 return VAR_6;
}
