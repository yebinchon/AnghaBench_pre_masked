
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resp_hdr {int dummy; } ;
struct httpd_req_aux {int resp_hdrs; scalar_t__ resp_hdrs_count; scalar_t__ req_hdrs_count; scalar_t__ first_chunk_sent; scalar_t__ content_type; scalar_t__ status; scalar_t__ remaining_len; int scratch; scalar_t__ sd; } ;
struct TYPE_3__ {int max_resp_headers; } ;
typedef TYPE_1__ httpd_config_t ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct httpd_req_aux *VAR_0, httpd_config_t *VAR_1)
{
    VAR_0->sd = 0;
    FUNC_0(VAR_0->scratch, 0, sizeof(VAR_0->scratch));
    VAR_0->remaining_len = 0;
    VAR_0->status = 0;
    VAR_0->content_type = 0;
    VAR_0->first_chunk_sent = 0;
    VAR_0->req_hdrs_count = 0;
    VAR_0->resp_hdrs_count = 0;
    FUNC_0(VAR_0->resp_hdrs, 0, VAR_1->max_resp_headers * sizeof(struct resp_hdr));
}
