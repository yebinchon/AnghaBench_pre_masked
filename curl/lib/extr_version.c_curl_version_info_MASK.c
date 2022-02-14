
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssl_buffer ;
typedef int ssh_buffer ;
typedef int quicbuffer ;
struct TYPE_7__ {int version_str; int version_num; } ;
typedef TYPE_1__ nghttp2_info ;
struct TYPE_8__ {char* ssl_version; int ares_num; int iconv_ver_num; char* libssh_version; char* brotli_version; char* quic_version; int nghttp2_version; int nghttp2_ver_num; int brotli_ver_num; int features; scalar_t__ libidn; int ares; int libz_version; } ;
typedef TYPE_2__ curl_version_info_data ;
typedef int brotli_buffer ;
struct TYPE_9__ {int supports; } ;
typedef int CURLversion ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 TYPE_6__* VAR_2 ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_8 () ;

curl_version_info_data *FUNC_9(CURLversion VAR_7)
{
  static bool VAR_8;
  if(VAR_8)
    return &VAR_6;
  (void)VAR_7;

  VAR_8 = 1;
  return &VAR_6;
}
