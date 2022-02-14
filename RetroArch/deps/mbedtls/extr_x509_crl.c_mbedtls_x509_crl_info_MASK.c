
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int sec; int min; int hour; int day; int mon; int year; } ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_4__ revocation_date; int serial; TYPE_3__ raw; } ;
typedef TYPE_5__ mbedtls_x509_crl_entry ;
struct TYPE_9__ {int sec; int min; int hour; int day; int mon; int year; } ;
struct TYPE_8__ {int sec; int min; int hour; int day; int mon; int year; } ;
struct TYPE_13__ {int sig_opts; int sig_md; int sig_pk; int sig_oid; TYPE_5__ entry; TYPE_2__ next_update; TYPE_1__ this_update; int issuer; int version; } ;
typedef TYPE_6__ mbedtls_x509_crl ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,...) ;
 int FUNC_1 (char*,size_t,int *) ;
 int FUNC_2 (char*,size_t,int *) ;
 int FUNC_3 (char*,size_t,int *,int ,int ,int ) ;

int FUNC_4( char *VAR_1, size_t VAR_2, const char *VAR_3,
                   const mbedtls_x509_crl *VAR_4 )
{
    int VAR_5;
    size_t VAR_6;
    char *VAR_7;
    const mbedtls_x509_crl_entry *VAR_8;

    VAR_7 = VAR_1;
    VAR_6 = VAR_2;

    VAR_5 = FUNC_0( VAR_7, VAR_6, "%sCRL version   : %d",
                               VAR_3, VAR_4->version );
    VAR_0;

    VAR_5 = FUNC_0( VAR_7, VAR_6, "\n%sissuer name   : ", VAR_3 );
    VAR_0;
    VAR_5 = FUNC_1( VAR_7, VAR_6, &VAR_4->issuer );
    VAR_0;

    VAR_5 = FUNC_0( VAR_7, VAR_6, "\n%sthis update   : " "%04d-%02d-%02d %02d:%02d:%02d", VAR_3,

                   VAR_4->this_update.year, VAR_4->this_update.mon,
                   VAR_4->this_update.day, VAR_4->this_update.hour,
                   VAR_4->this_update.min, VAR_4->this_update.sec );
    VAR_0;

    VAR_5 = FUNC_0( VAR_7, VAR_6, "\n%snext update   : " "%04d-%02d-%02d %02d:%02d:%02d", VAR_3,

                   VAR_4->next_update.year, VAR_4->next_update.mon,
                   VAR_4->next_update.day, VAR_4->next_update.hour,
                   VAR_4->next_update.min, VAR_4->next_update.sec );
    VAR_0;

    VAR_8 = &VAR_4->entry;

    VAR_5 = FUNC_0( VAR_7, VAR_6, "\n%sRevoked certificates:",
                               VAR_3 );
    VAR_0;

    while( VAR_8 != ((void*)0) && VAR_8->raw.len != 0 )
    {
        VAR_5 = FUNC_0( VAR_7, VAR_6, "\n%sserial number: ",
                               VAR_3 );
        VAR_0;

        VAR_5 = FUNC_2( VAR_7, VAR_6, &VAR_8->serial );
        VAR_0;

        VAR_5 = FUNC_0( VAR_7, VAR_6, " revocation date: " "%04d-%02d-%02d %02d:%02d:%02d",

                   VAR_8->revocation_date.year, VAR_8->revocation_date.mon,
                   VAR_8->revocation_date.day, VAR_8->revocation_date.hour,
                   VAR_8->revocation_date.min, VAR_8->revocation_date.sec );
        VAR_0;

        VAR_8 = VAR_8->next;
    }

    VAR_5 = FUNC_0( VAR_7, VAR_6, "\n%ssigned using  : ", VAR_3 );
    VAR_0;

    VAR_5 = FUNC_3( VAR_7, VAR_6, &VAR_4->sig_oid, VAR_4->sig_pk, VAR_4->sig_md,
                             VAR_4->sig_opts );
    VAR_0;

    VAR_5 = FUNC_0( VAR_7, VAR_6, "\n" );
    VAR_0;

    return( (int) ( VAR_2 - VAR_6 ) );
}
