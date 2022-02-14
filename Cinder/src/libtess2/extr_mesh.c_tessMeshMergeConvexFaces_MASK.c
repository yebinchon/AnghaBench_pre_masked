
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ inside; TYPE_3__* anEdge; struct TYPE_12__* next; } ;
struct TYPE_11__ {int * Org; struct TYPE_11__* Lnext; TYPE_1__* Lprev; TYPE_4__* Lface; struct TYPE_11__* Sym; } ;
struct TYPE_10__ {TYPE_4__ fHead; } ;
struct TYPE_9__ {int Org; } ;
typedef int TESSvertex ;
typedef TYPE_2__ TESSmesh ;
typedef TYPE_3__ TESShalfEdge ;
typedef TYPE_4__ TESSface ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

int FUNC_3( TESSmesh *VAR_0, int VAR_1 )
{
 TESSface *VAR_2;
 TESShalfEdge *VAR_3, *VAR_4, *VAR_5;
 TESSvertex *VAR_6;
 int VAR_7, VAR_8;

 for( VAR_2 = VAR_0->fHead.next; VAR_2 != &VAR_0->fHead; VAR_2 = VAR_2->next )
 {

  if( !VAR_2->inside )
   continue;

  VAR_3 = VAR_2->anEdge;
  VAR_6 = VAR_3->Org;

  while (1)
  {
   VAR_4 = VAR_3->Lnext;
   VAR_5 = VAR_3->Sym;


   if( VAR_5 && VAR_5->Lface && VAR_5->Lface->inside )
   {


    VAR_7 = FUNC_0( VAR_2 );
    VAR_8 = FUNC_0( VAR_5->Lface );
    if( (VAR_7+VAR_8-2) <= VAR_1 )
    {

     if( FUNC_1( VAR_3->Lprev->Org, VAR_3->Org, VAR_5->Lnext->Lnext->Org ) &&
      FUNC_1( VAR_5->Lprev->Org, VAR_5->Org, VAR_3->Lnext->Lnext->Org ) )
     {
      VAR_4 = VAR_5->Lnext;
      if( !FUNC_2( VAR_0, VAR_5 ) )
       return 0;
      VAR_3 = 0;
     }
    }
   }

   if( VAR_3 && VAR_3->Lnext->Org == VAR_6 )
    break;


   VAR_3 = VAR_4;
  }
 }

 return 1;
}
