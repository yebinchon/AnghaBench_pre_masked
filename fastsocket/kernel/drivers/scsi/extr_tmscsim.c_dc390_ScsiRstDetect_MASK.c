
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc390_acb {size_t AdapterIndex; int ACBFlag; int * pActiveDCB; scalar_t__ Connected; scalar_t__ last_reset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dc390_acb*,int *) ;
 int FUNC_2 (struct dc390_acb*) ;
 int** VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5( struct dc390_acb* VAR_12 )
{
    FUNC_3 ("DC390: Rst_Detect: laststat = %08x\n", VAR_10);


    FUNC_0 (VAR_1, VAR_2);


    FUNC_4 (1000);
    FUNC_0 (VAR_8, VAR_0);
    VAR_12->last_reset = VAR_11 + 5*VAR_4/2
      + VAR_4 * VAR_9[VAR_12->AdapterIndex][VAR_3];
    VAR_12->Connected = 0;

    if( VAR_12->ACBFlag & VAR_6 )
 VAR_12->ACBFlag |= VAR_7;
    else
    {
 VAR_12->ACBFlag |= VAR_5;

 FUNC_2( VAR_12 );
 FUNC_1( VAR_12, ((void*)0));

 VAR_12->pActiveDCB = ((void*)0);
 VAR_12->ACBFlag = 0;
    }
    return;
}
