
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int nghttp2_session ;
struct TYPE_4__ {int stream_id; } ;
struct TYPE_5__ {TYPE_1__ hd; } ;
typedef TYPE_2__ nghttp2_frame ;


 int FUNC_0 (int ,char*,int ,int const*,int const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(nghttp2_session *VAR_1, const nghttp2_frame *VAR_2,
                              const uint8_t *VAR_3, size_t VAR_4, const uint8_t *VAR_5,
                              size_t VAR_6, uint8_t VAR_7, void *VAR_8)
{
    FUNC_0(VAR_0, "[hdr-recv][sid:%d] %s : %s", VAR_2->hd.stream_id, VAR_3, VAR_5);
    return 0;
}
