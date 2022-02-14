
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* anEdge; } ;
struct TYPE_9__ {struct TYPE_9__* Sym; struct TYPE_9__* Lnext; struct TYPE_9__* Lprev; int Org; int Dst; } ;
typedef int TESSmesh ;
typedef TYPE_1__ TESShalfEdge ;
typedef TYPE_2__ TESSface ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*,TYPE_1__*) ;

int FUNC_6( TESSmesh *VAR_0, TESSface *VAR_1 )
{
 TESShalfEdge *VAR_2, *VAR_3;






 VAR_2 = VAR_1->anEdge;
 FUNC_4( VAR_2->Lnext != VAR_2 && VAR_2->Lnext->Lnext != VAR_2 );

 for( ; FUNC_3( VAR_2->Dst, VAR_2->Org ); VAR_2 = VAR_2->Lprev )
  ;
 for( ; FUNC_3( VAR_2->Org, VAR_2->Dst ); VAR_2 = VAR_2->Lnext )
  ;
 VAR_3 = VAR_2->Lprev;

 while( VAR_2->Lnext != VAR_3 ) {
  if( FUNC_3( VAR_2->Dst, VAR_3->Org )) {




   while( VAR_3->Lnext != VAR_2 && (FUNC_0( VAR_3->Lnext )
    || FUNC_2( VAR_3->Org, VAR_3->Dst, VAR_3->Lnext->Dst ) <= 0 )) {
     TESShalfEdge *VAR_4= FUNC_5( VAR_0, VAR_3->Lnext, VAR_3 );
     if (VAR_4 == ((void*)0)) return 0;
     VAR_3 = VAR_4->Sym;
   }
   VAR_3 = VAR_3->Lprev;
  } else {

   while( VAR_3->Lnext != VAR_2 && (FUNC_1( VAR_2->Lprev )
    || FUNC_2( VAR_2->Dst, VAR_2->Org, VAR_2->Lprev->Org ) >= 0 )) {
     TESShalfEdge *VAR_5= FUNC_5( VAR_0, VAR_2, VAR_2->Lprev );
     if (VAR_5 == ((void*)0)) return 0;
     VAR_2 = VAR_5->Sym;
   }
   VAR_2 = VAR_2->Lnext;
  }
 }




 FUNC_4( VAR_3->Lnext != VAR_2 );
 while( VAR_3->Lnext->Lnext != VAR_2 ) {
  TESShalfEdge *VAR_6= FUNC_5( VAR_0, VAR_3->Lnext, VAR_3 );
  if (VAR_6 == ((void*)0)) return 0;
  VAR_3 = VAR_6->Sym;
 }

 return 1;
}
